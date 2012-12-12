# New ports collection makefile for:	sievelog
# Date created:				2010-07-26
# Whom:					Jesse Kempf <jessekempf@gmail.com>
# $FreeBSD: ports/sysutils/sievelog/Makefile,v 1.2 2012/11/17 06:01:46 svnexp Exp $
#

PORTNAME=	sievelog
PORTVERSION=	1.0.1
CATEGORIES=	sysutils python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jessekempf@gmail.com
COMMENT=	Syslog message filter

USE_PYTHON=	2.5+
USE_PYDISTUTILS=yes

SUB_FILES=	pkg-message

PLIST_FILES=	bin/${PORTNAME} \
		etc/${PORTNAME}.conf.example

MAN1=		${PORTNAME}.1
MAN5=		${PORTNAME}.conf.5

post-install:
	@${CP} -p ${WRKSRC}/test.sv ${PREFIX}/etc/${PORTNAME}.conf.example
	@${INSTALL_MAN} ${WRKSRC}/man/man1/${MAN1} ${MANPREFIX}/man/man1
	@${INSTALL_MAN} ${WRKSRC}/man/man5/${MAN5} ${MANPREFIX}/man/man5
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
