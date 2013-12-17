# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: textproc/libxslt-reference/Makefile 336013 2013-12-09 18:41:16Z antoine $

PORTREVISION=	0

BUILD_DEPENDS=	${NONEXISTENT}:${PORTSDIR}/textproc/libxslt:configure

PARENT_WRKSRC!=	cd ${.CURDIR}/../libxslt && ${MAKE} -V WRKSRC
EXTRACT_ONLY=
USES=		gmake

do-install:
	@cd ${PARENT_WRKSRC}/doc && ${GMAKE} ${MAKE_ARGS} install-data-local

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
