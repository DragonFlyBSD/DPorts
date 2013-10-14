# Created by: ache
# $FreeBSD: converters/mpack/Makefile 327804 2013-09-21 11:06:03Z dinoex $

PORTNAME=	mpack
PORTVERSION=	1.6
PORTREVISION=	3
CATEGORIES=	converters mail news
MASTER_SITES=	ftp://ftp.andrew.cmu.edu/pub/mpack/

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	External MIME packer/unpacker

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
GNU_CONFIGURE=	yes

NO_STAGE=	yes

MAN1=		mpack.1 munpack.1
PLIST_FILES=	bin/mpack bin/munpack

.include <bsd.port.mk>
