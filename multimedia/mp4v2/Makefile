# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: multimedia/mp4v2/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mp4v2
PORTVERSION=	1.9.1
CATEGORIES=	multimedia
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Library and tools to read, create, and modify mp4 files

CONFLICTS=	mpeg4ip-libmp4v2-[0-9.]*
USE_BZIP2=	yes
USES=		gmake
MAKEFILE=	GNUmakefile
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ENV=	"FOUND_HELP2MAN=no"

.include <bsd.port.mk>
