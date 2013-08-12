# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: sysutils/dim/Makefile 324191 2013-08-03 13:44:00Z mat $

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

USES=		shebangfix perl5
SHEBANG_FILES=	dim.pl
USE_PERL5=	run

PLIST_FILES=	bin/dim

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/dim.pl ${PREFIX}/bin/dim

.include <bsd.port.mk>
