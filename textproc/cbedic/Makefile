# New ports collection makefile for:	cbedic
# Date created:			15 April 2002
# Whom:				Peter Pentchev <roam@FreeBSD.org>
#
# $FreeBSD: ports/textproc/cbedic/Makefile,v 1.7 2012/11/17 06:01:52 svnexp Exp $
#

PORTNAME=	cbedic
PORTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	SF/kbedic/CBE%20Dictionary/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An English-to-Bulgarian and Bulgarian-to-English dictionary

RUN_DEPENDS=	${DICT_DIR}/${DICT_CHECK}:${PORTSDIR}/textproc/bedic-data

DICT_CHECK?=	buleng.dat
DICT_DIR?=	${LOCALBASE}/share

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

CONFIGURE_ARGS=	--datadir=${DICT_DIR}

.include <bsd.port.mk>
