# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: databases/p5-Time-Piece-MySQL/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=		Time::Piece::MySQL.3

.include <bsd.port.mk>
