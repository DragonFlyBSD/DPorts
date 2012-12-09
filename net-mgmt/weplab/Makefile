# New ports collection makefile for:	weplab
# Date created:				24 Aug 2006
# Whom:					Anton Karpov <toxa@toxahost.ru>
#
# $FreeBSD: ports/net-mgmt/weplab/Makefile,v 1.6 2012/11/17 06:00:38 svnexp Exp $
#

PORTNAME=	weplab
PORTVERSION=	0.1.5
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	WepLab is a tool designed to teach how WEP works

GNU_CONFIGURE=	yes
USE_CSTD=	gnu89

MAN1=		weplab.1
PLIST_FILES=	bin/weplab

post-patch:
	@${REINPLACE_CMD} -E 's,^(CC|CFLAGS|LDFLAGS) *=,\1 ?=,g' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
