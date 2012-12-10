# New ports collection makefile for:	calife
# Date created:				13 Jun 2000
# Whom:					Thomas Quinot <thomas@cuivre.fr.eu.org>
#
# $FreeBSD: ports/security/calife/Makefile,v 1.14 2012/11/17 06:01:01 svnexp Exp $
#

PORTNAME=	calife
PORTVERSION=	2.8.6.5
CATEGORIES=	security
MASTER_SITES=	ftp://postfix.eu.org/pub/calife/ \
		ftp://frmug.org/pub/calife/
DISTNAME=	calife-2.8.6-p5

MAINTAINER=	thomas@FreeBSD.org
COMMENT=	A lightweight alternative to sudo

USE_BZIP2=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	"--with-etcdir=${PREFIX}/etc"

CONFLICTS?=	calife-3.*

MAN1=		calife.1
MAN5=		calife.auth.5

.include <bsd.port.mk>
