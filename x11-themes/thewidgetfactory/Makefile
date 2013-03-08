# $FreeBSD: ports/x11-themes/thewidgetfactory/Makefile,v 1.12 2012/12/31 17:09:13 svnexp Exp $

PORTNAME=	thewidgetfactory
PORTVERSION=	0.2.1
PORTREVISION=	6
CATEGORIES=	x11-themes
MASTER_SITES=	http://www.stellingwerff.com/TheWidgetFactory/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool for previewing GTK+ widgets and testing new themes

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USE_GNOME=	gtk20
USE_PKGCONFIG=	build

PLIST_FILES=	bin/twf

post-patch:
# Fix console warnings of "GtkSpinButton: setting an adjustment with non-zero
# page size is deprecated"
	@${REINPLACE_CMD} -e 's/10, 10/10, 0/' ${WRKSRC}/src/interface.c

.include <bsd.port.mk>
