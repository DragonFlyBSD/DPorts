# New ports collection makefile for:	p5-Time-Piece-MySQL
# Date created:		19 August 2003
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/databases/p5-Time-Piece-MySQL/Makefile,v 1.11 2012/11/17 05:55:17 svnexp Exp $
#

PORTNAME=	Time-Piece-MySQL
PORTVERSION=	0.06
CATEGORIES=	databases devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Time::Piece::MySQL - Adds MySQL-specific methods to Time::Piece

BUILD_DEPENDS=	p5-Time-Piece>=0:${PORTSDIR}/devel/p5-Time-Piece
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Time::Piece::MySQL.3

.include <bsd.port.mk>
