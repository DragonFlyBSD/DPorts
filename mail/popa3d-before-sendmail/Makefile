# $FreeBSD: mail/popa3d-before-sendmail/Makefile 342300 2014-02-02 14:33:37Z miwi $

CATEGORIES=	mail

MAINTAINER=	ports@FreeBSD.org

WITH_SMTP_AFTER_POP3=	yes
MASTERDIR?=	${.CURDIR}/../popa3d

OPTIONS_DEFAULT=	SMTP_AFTER_POP3

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include "${MASTERDIR}/Makefile"
