# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: textproc/libxslt-reference/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTREVISION=	0

BUILD_DEPENDS=	${NONEXISTENT}:${PORTSDIR}/textproc/libxslt:configure

PARENT_WRKSRC!=	cd ${.CURDIR}/../libxslt && ${MAKE} -V WRKSRC
EXTRACT_ONLY=
USES=		gmake

do-install:
	@cd ${PARENT_WRKSRC}/doc && ${GMAKE} ${MAKE_ARGS} install-data-local

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
