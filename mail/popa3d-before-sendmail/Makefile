# $FreeBSD: mail/popa3d-before-sendmail/Makefile 327742 2013-09-20 19:59:12Z bapt $

CATEGORIES=	mail

MAINTAINER=	ports@FreeBSD.org

WITH_SMTP_AFTER_POP3=	yes
MASTERDIR?=	${.CURDIR}/../popa3d

OPTIONS_DEFAULT=	SMTP_AFTER_POP3

.if exists(${.CURDIR}/Makefile.local)
NO_STAGE=	yes
.include "${.CURDIR}/Makefile.local"
.endif

.include "${MASTERDIR}/Makefile"
