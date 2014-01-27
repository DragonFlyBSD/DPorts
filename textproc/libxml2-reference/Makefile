# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: textproc/libxml2-reference/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTREVISION=	0

BUILD_DEPENDS=	${NONEXISTENT}:${PORTSDIR}/textproc/libxml2:configure

PARENT_WRKSRC!=	cd ${.CURDIR}/../libxml2 && ${MAKE} -V WRKSRC
EXTRACT_ONLY=
USES=		gmake

.if !defined(NOPORTEXAMPLES)
EXAMPLES=	testHTML.c testSAX.c testXPath.c xmllint.c
PLIST_FILES=	${EXAMPLES:S|^|%%EXAMPLESDIR%%/|}
PLIST_DIRS=	%%EXAMPLESDIR%%
.endif

do-install:
.for d in . doc doc/devhelp doc/examples
	@cd ${PARENT_WRKSRC}/${d} && ${GMAKE} ${MAKE_ARGS} install-data-local
.endfor

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
