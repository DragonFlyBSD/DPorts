# Created by: Anton Karpov <toxa@toxahost.ru>
# $FreeBSD: net-mgmt/weplab/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -E 's,^(CC|CFLAGS|LDFLAGS) *=,\1 ?=,g' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
