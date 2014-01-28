# $FreeBSD: deskutils/plopfolio/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	plopfolio
PORTVERSION=	0.1.0
PORTREVISION=	2
CATEGORIES=	deskutils gnustep
MASTER_SITES=	${MASTER_SITE_GNUSTEP}
MASTER_SITE_SUBDIR=	usr-apps

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free clone of KlipFolio for GNUstep

LICENSE=	GPLv2

USE_GNUSTEP=	yes
USE_GNUSTEP_BACK=	yes
USE_GNUSTEP_BUILD=	yes
USE_GNUSTEP_INSTALL=	yes

FIXME=	Channel.m PlopFolio.m PreferencesPanelController.m

NO_STAGE=	yes
post-patch:
.for i in ${FIXME}
	${REINPLACE_CMD} -e 's|Foundation/GSXML.h|GNUstepBase/GSXML.h|' \
		${WRKSRC}/${i}
.endfor

.include <bsd.port.mk>
