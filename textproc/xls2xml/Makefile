# New ports collection makefile for:	xls2xml
# Date created:				4 November 1999
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/textproc/xls2xml/Makefile,v 1.26 2012/11/17 06:02:25 svnexp Exp $
#

PORTNAME=	xls2xml
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_LOCAL} \
		http://arturo.directmail.org/filters/archive/
MASTER_SITE_SUBDIR=	sobomax

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A utility for converting MS Excel files to XML

LIB_DEPENDS=	cole.2:${PORTSDIR}/textproc/cole \
		xml.5:${PORTSDIR}/textproc/libxml

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lcole

post-patch:
	@${REINPLACE_CMD} -e 's|$${CONFIG_SHELL-/bin/sh} $$ac_aux_dir|$$ac_aux_dir|' \
		${WRKSRC}/configure

.include <bsd.port.mk>
