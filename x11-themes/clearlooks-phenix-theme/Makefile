# Created by: Olivier Duchateau
# $FreeBSD: x11-themes/clearlooks-phenix-theme/Makefile 339273 2014-01-09 20:12:38Z olivierd $

PORTNAME=	clearlooks-phenix
PORTVERSION=	3.0.16
CATEGORIES=	x11-themes xfce
MASTER_SITES=	GENTOO
MASTER_SITE_SUBDIR=	distfiles
PKGNAMESUFFIX=	-theme

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Gtk3 port of Clearlooks theme for the Xfce Desktop

RUN_DEPENDS=	gtk-engines2>=2.20.2:${PORTSDIR}/x11-themes/gtk-engines2

WRKSRC=	${WRKDIR}/projets-divers-${PORTNAME}
NO_BUILD=	yes

post-patch:
	@${RM} ${WRKSRC}/gtk-?.0/*.orig

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/themes/Clearlooks-Phenix
.for dir in gtk-2.0 gtk-3.0 xfwm4
	@cd ${WRKSRC} && \
		${COPYTREE_SHARE} ${dir} \
		${STAGEDIR}${PREFIX}/share/themes/Clearlooks-Phenix
.endfor

.include <bsd.port.mk>
