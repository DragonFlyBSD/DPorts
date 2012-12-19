# New ports collection makefile for:	gtkmm20-reference
# Date created:				09 May 2006
# Whom:					Jean-Yves Lefort <jylefort@FreeBSD.org>
#
# $FreeBSD: ports/x11-toolkits/gtkmm30-reference/Makefile,v 1.13 2012/11/17 06:03:35 svnexp Exp $
#

PORTREVISION=	1

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gtkmm-3.0.pc:${PORTSDIR}/x11-toolkits/gtkmm30 \
		glibmm-reference>=0:${PORTSDIR}/devel/glibmm-reference

USE_GMAKE=	yes
GNU_CONFIGURE=	yes

DOCSDIR=	${PREFIX}/share/doc/gtkmm-3.0

do-install:
.if !defined(NOPORTDOCS)
.for d in docs
	@cd ${WRKSRC}/${d} && ${GMAKE} install
.endfor
.endif

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
