    .include "asm/macros.inc"

    .syntax unified

    thumb_func_start BitFill
BitFill: @ 0x080032b4
    push {r4, r5, r6, r7, lr}
    mov r7, sl
    mov r6, sb
    mov r5, r8
    push {r5, r6, r7}
    sub sp, #8
    str r1, [sp, #4]
    adds r6, r2, #0
    ldr r1, [sp, #0x28]
    lsls r0, r0, #0x18
    lsrs r4, r0, #0x18
    lsls r1, r1, #0x18
    lsrs r1, r1, #0x18
    lsls r0, r4, #1
    adds r0, r0, r4
    lsls r0, r0, #2
    ldr r5, lbl_080032e4 @ =0x040000b0
    adds r2, r0, r5
    cmp r1, #0x20
    bne lbl_080032e8
    movs r0, #0x80
    lsls r0, r0, #0x13
    b lbl_080032ea
    .align 2, 0
lbl_080032e4: .4byte 0x040000b0
lbl_080032e8:
    movs r0, #0
lbl_080032ea:
    str r0, [sp]
    lsls r0, r4, #1
    movs r5, #0x80
    lsls r5, r5, #4
    mov sb, r5
    add r7, sp, #4
    lsrs r1, r1, #4
    mov r8, r1
    asrs r5, r1
    movs r1, #0x81
    lsls r1, r1, #0x18
    orrs r5, r1
    adds r0, r0, r4
    lsls r0, r0, #2
    mov ip, r0
    ldr r4, lbl_08003328 @ =0x040000b0
    mov sl, r4
lbl_0800330c:
    cmp r3, sb
    bls lbl_08003340
    str r7, [r2]
    str r6, [r2, #4]
    ldr r0, [sp]
    orrs r0, r5
    str r0, [r2, #8]
    ldr r0, [r2, #8]
    mov r1, ip
    add r1, sl
    ldr r0, [r1, #8]
    movs r4, #0x80
    lsls r4, r4, #0x18
    b lbl_0800332e
    .align 2, 0
lbl_08003328: .4byte 0x040000b0
lbl_0800332c:
    ldr r0, [r1, #8]
lbl_0800332e:
    ands r0, r4
    cmp r0, #0
    bne lbl_0800332c
    ldr r0, lbl_0800333c @ =0xfffff800
    adds r3, r3, r0
    add r6, sb
    b lbl_0800330c
    .align 2, 0
lbl_0800333c: .4byte 0xfffff800
lbl_08003340:
    str r7, [r2]
    str r6, [r2, #4]
    mov r1, r8
    lsrs r3, r1
    movs r4, #0x81
    lsls r4, r4, #0x18
    orrs r3, r4
    ldr r0, [sp]
    orrs r0, r3
    str r0, [r2, #8]
    ldr r0, [r2, #8]
    mov r1, ip
    add r1, sl
    ldr r0, [r1, #8]
    movs r5, #0x80
    lsls r5, r5, #0x18
    ands r0, r5
    cmp r0, #0
    beq lbl_08003370
    adds r2, r5, #0
lbl_08003368:
    ldr r0, [r1, #8]
    ands r0, r2
    cmp r0, #0
    bne lbl_08003368
lbl_08003370:
    add sp, #8
    pop {r3, r4, r5}
    mov r8, r3
    mov sb, r4
    mov sl, r5
    pop {r4, r5, r6, r7}
    pop {r0}
    bx r0
