# New ports collection makefile for:	navi2ch for emacs21
# Date created:		23 Nov 2001
# Whom:			FUJISHIMA Satsuki <sf@FreeBSD.org>
#
# $FreeBSD: ports/japanese/navi2ch-emacs21/Makefile,v 1.9 2012/11/17 05:58:37 svnexp Exp $
#

MASTERDIR=	${.CURDIR}/../navi2ch

USE_EMACS=	yes
EMACS_PORT_NAME=	emacs21

.if !defined(WITHOUT_X11)
RUN_DEPENDS=		${LOCALBASE}/lib/X11/fonts/local/monak12.pcf.gz:${PORTSDIR}/japanese/monafonts
.endif

.include "${MASTERDIR}/Makefile"
