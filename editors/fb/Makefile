# New ports collection makefile for:	fb
# Date created:				Oct 15, 1999
# Whom:					Mikhail Teterin
#
# $FreeBSD: ports/editors/fb/Makefile,v 1.9 2012/11/17 05:57:13 svnexp Exp $
#

PORTNAME=	fb
PORTVERSION=	1.5
CATEGORIES=	editors
MASTER_SITES=	http://home.mho.net/jswaby/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	_tar.gz

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	Binary file viewer, editor, and manipulator (and a lot more)

NO_WRKSUBDIR=	Yes

MAN1=		fb.1
MANCOMPRESSED=	maybe
PLIST_FILES=	bin/fb
MAKEFILE=	${FILESDIR}/Makefile.in
MAKE_ARGS+=	PREFIX="${PREFIX}"

.include <bsd.port.mk>
