# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: databases/p5-Time-Piece-MySQL/Makefile 332592 2013-11-03 06:53:54Z vanilla $

PORTNAME=	Time-Piece-MySQL
PORTVERSION=	0.06
CATEGORIES=	databases devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Time::Piece::MySQL - Adds MySQL-specific methods to Time::Piece

BUILD_DEPENDS=	p5-Time-Piece>=0:${PORTSDIR}/devel/p5-Time-Piece
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
