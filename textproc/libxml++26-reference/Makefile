# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: textproc/libxml++26-reference/Makefile 336013 2013-12-09 18:41:16Z antoine $
#   $MCom: ports/textproc/libxml++26-reference/Makefile,v 1.1 2010/04/03 16:21:50 avl Exp $

PORTREVISION=	0

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/libxml++-2.6.pc:${PORTSDIR}/textproc/libxml++26 \
		glibmm-reference>=0:${PORTSDIR}/devel/glibmm-reference

USES=		gmake pkgconfig
GNU_CONFIGURE=	yes

DOCSDIR=	${PREFIX}/share/doc/libxml++-2.6

do-install:
	@cd ${WRKSRC} && ${GMAKE} ${MAKE_ARGS} install-data-local install-dist_referenceDATA

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
