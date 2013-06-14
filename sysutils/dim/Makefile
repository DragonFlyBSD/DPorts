# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: sysutils/dim/Makefile 318212 2013-05-15 01:23:13Z miwi $

PORTNAME=	dim
PORTVERSION=	1.1
CATEGORIES=	sysutils
MASTER_SITES=	https://glyphobet.net/dim/
DISTNAME=	dim
EXTRACT_SUFX=	.tar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Directory lister which sorts the file list in 2D

LICENSE=	GPLv2 # (or later)

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

USES=		shebangfix
SHEBANG_FILES=	dim.pl
USE_PERL5_RUN=	yes

PLIST_FILES=	bin/dim

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/dim.pl ${PREFIX}/bin/dim

.include <bsd.port.mk>
