# Created by: rasmus@kaj.se
# $FreeBSD: mail/gbuffy/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gbuffy
PORTVERSION=	0.2.6
PORTREVISION=	5
CATEGORIES=	mail
MASTER_SITES=	http://www.fiction.net/blong/programs/gbuffy/gbuffy-${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A GTK+ multiple mailbox "biff" program

LIB_DEPENDS=	PropList.2:${PORTSDIR}/devel/libPropList \
		compface.1:${PORTSDIR}/mail/faces

PLIST_FILES=	bin/gbuffy
USE_GNOME=	gtk12
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"

NO_STAGE=	yes
.include <bsd.port.mk>
