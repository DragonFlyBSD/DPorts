# Created by: Dryice Liu <dryice@liu.com.cn>
# $FreeBSD: textproc/xml-parse.el/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	xml-parse.el
PORTVERSION=	1.5
PORTREVISION=	4
CATEGORIES=	textproc elisp
MASTER_SITES=	http://dryice.name/computer/FreeBSD/distfiles/ \
		http://sacha.free.net.ph/notebook/emacs/
PKGNAMESUFFIX=	-${EMACS_PORT_NAME}
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=
EXTRACT_ONLY=

MAINTAINER=	dryice@dryice.name
COMMENT=	Code to efficiently read/write XML data with Elisp

USE_EMACS=	yes
EMACS_PORT_NAME?=	emacs21

.if ${EMACS_PORT_NAME} != "emacs21"
PORTNAMESUFFIX=	${PKGNAMESUFFIX}
.endif

NO_BUILD=	yes

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${DISTDIR}/${DISTNAME} ${PREFIX}/${EMACS_SITE_LISPDIR}

.include <bsd.port.mk>
