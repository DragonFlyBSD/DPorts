# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: x11-toolkits/gtk20-reference/Makefile 318868 2013-05-23 13:02:32Z kwm $

PORTREVISION=	1

BOOKS=		gdk gtk

PLIST=		${.CURDIR}/pkg-plist

do-install:
.for d in ${BOOKS}
	if [ -d ${REFERENCE_SRC}/${d}/html ]; then \
		${MKDIR} ${PREFIX}/share/doc/${d}2; \
		cd ${REFERENCE_SRC}/${d}/html && \
		${FIND} * -type d ! -empty -exec ${MKDIR} "${PREFIX}/share/doc/${d}2/{}" \; && \
		${FIND} * -type f -exec ${INSTALL_DATA} "{}" "${PREFIX}/share/doc/${d}2/{}" \; ; \
	fi
.endfor

# overwrite this from bsd.port.mk, because we not don't honow DOCSDIR
add-plist-docs:
	@${DO_NADA}

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
