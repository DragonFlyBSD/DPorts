# $FreeBSD: ports/mail/popa3d-before-sendmail/Makefile,v 1.8 2012/11/17 05:59:10 svnexp Exp $

CATEGORIES=	mail

MAINTAINER=	ports@FreeBSD.org

WITH_SMTP_AFTER_POP3=	yes
MASTERDIR?=	${.CURDIR}/../popa3d

OPTIONS_DEFAULT=	SMTP_AFTER_POP3

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include "${MASTERDIR}/Makefile"
