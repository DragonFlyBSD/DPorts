# Created by: Frank Laszlo <laszlof@vonostingroup.com>
# $FreeBSD: security/ncrypt/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	ncrypt
PORTVERSION=	0.7.0
PORTREVISION=	2
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-0.7/${PORTNAME}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Advanced AES file encryption tool

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/ncrypt bin/nrm

post-configure:
	@${REINPLACE_CMD} -E 's,^(CC|CFLAGS) =,\1 \?=,g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
