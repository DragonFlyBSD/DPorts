# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: x11-toolkits/gtk20-reference/Makefile 336476 2013-12-14 19:25:33Z kwm $

PORTREVISION=	0

BOOKS=		gdk gtk

do-install:
.for d in ${BOOKS}
	if [ -d ${REFERENCE_SRC}/${d}/html ]; then \
		${MKDIR} ${STAGEDIR}${PREFIX}/share/doc/${d}2; \
		cd ${REFERENCE_SRC}/${d}/html && \
		${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/share/doc/${d}2; \
	fi
.endfor

# overwrite this from bsd.port.mk, because we not don't honor DOCSDIR
add-plist-docs:
	@${DO_NADA}

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
