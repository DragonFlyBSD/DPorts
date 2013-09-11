# Created by: František Dvořák <valtri@civ.zcu.cz>
# $FreeBSD: audio/festvox-czech/Makefile 325727 2013-08-30 23:01:05Z bapt $

PORTNAME=	festvox-czech
PORTVERSION=	0.1
CATEGORIES=	audio
MASTER_SITES=	http://www.freebsoft.org/pub/projects/festival-czech-diphone-database/
DISTNAME=	voice-czech-ph-bin-${PORTVERSION}
DIST_SUBDIR=	festival

MAINTAINER=	valtri@civ.zcu.cz
COMMENT=	Czech male voice for Festival

RUN_DEPENDS=	${LOCALBASE}/share/festival/lib/dicts/czech-lexicon.out:${PORTSDIR}/audio/festlex-czech

NO_BUILD=	yes
USES=		gmake
MAKE_ARGS=	festival_voices_path=${PREFIX}/share/festival/lib/voices

.include <bsd.port.mk>
