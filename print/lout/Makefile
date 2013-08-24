# Created by: oly@world.std.com
# $FreeBSD: print/lout/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	lout
PORTVERSION=	3.40
CATEGORIES=	print
MASTER_SITES=	SAVANNAH

MAINTAINER=	danilogondolfo@gmail.com
COMMENT=	LaTeX like document creation system with PostScript/PDF output

LICENSE=	GPLv3 # (or later)

OPTIONS_DEFINE=	DOCS

USE_GMAKE=	yes
MAKEFILE=	makefile
ALL_TARGET=	lout prg2lout

MAN1=		lout.1 prg2lout.1

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
INSTALL_TARGET=	install installman installdoc
.else
INSTALL_TARGET=	install installman
.endif

.include <bsd.port.mk>
