# New ports collection makefile for:   festvox-czech
# Date created:        2008-04-29
# Whom:                František Dvořák <valtri@civ.zcu.cz>
#
# $FreeBSD: ports/audio/festvox-czech/Makefile,v 1.2 2012/11/17 05:54:31 svnexp Exp $
#

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
USE_GMAKE=	yes
MAKE_ARGS=	festival_voices_path=${PREFIX}/share/festival/lib/voices

.include <bsd.port.mk>
