# Created by: Mikhail Teterin
# $FreeBSD: editors/fb/Makefile 342321 2014-02-02 16:00:44Z miwi $

PORTNAME=	fb
PORTVERSION=	1.5
CATEGORIES=	editors
MASTER_SITES=	http://home.mho.net/jswaby/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	_tar.gz

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	Binary file viewer, editor, and manipulator (and a lot more)

NO_WRKSUBDIR=	Yes

PLIST_FILES=	bin/fb \
		man/man1/fb.1.gz
MAKEFILE=	${FILESDIR}/Makefile.in
MAKE_ARGS+=	PREFIX="${PREFIX}"

.include <bsd.port.mk>
