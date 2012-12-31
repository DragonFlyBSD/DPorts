# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: ports/x11/stjerm/Makefile,v 1.5 2012/12/16 12:06:04 svnexp Exp $

PORTNAME=	stjerm
PORTVERSION=	0.16
CATEGORIES=	x11
MASTER_SITES=	http://stjerm-terminal.googlecode.com/files/

MAINTAINER=	lichray@gmail.com
COMMENT=	A GTK+-based quake-like terminal emulator

USE_AUTOTOOLS=	aclocal autoheader automake
AUTOMAKE_ARGS=	--add-missing
ACLOCAL_ARGS=	--acdir=${ACLOCAL_DIR} \
		-I${LOCALBASE}/share/aclocal
USE_GNOME=	vte gtk20
GNU_CONFIGURE=	yes
USE_GMAKE=	yes

MAN8=		stjerm.8
LICENSE_FILE=	${WRKSRC}/COPYING
PLIST_FILES=	bin/stjerm

.include <bsd.port.mk>
