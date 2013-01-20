# New ports collection makefile for:	q-graph
# Date created:		14 August 2003
# Whom:			ag@muwiinfa.geschichte.uni-mainz.de Albert Graef
#
# $FreeBSD: ports/graphics/q-graph/Makefile,v 1.17 2012/11/17 05:58:21 svnexp Exp $
#

PORTNAME=	graph
PORTVERSION=	1.8
PORTREVISION=	5
CATEGORIES=	graphics
MASTER_SITES=	SF/q-lang/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	q-

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Q-Graph -- graph library and editor for the Q language

LIB_DEPENDS=	q.8:${PORTSDIR}/lang/q
RUN_DEPENDS=	${LOCALBASE}/lib/bwidget/init.tcl:${PORTSDIR}/x11-toolkits/bwidget

DATADIR=	${PREFIX}/share/q

GNU_CONFIGURE=	yes

.include <bsd.port.mk>
