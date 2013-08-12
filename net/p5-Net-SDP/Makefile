# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: net/p5-Net-SDP/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Net-SDP
PORTVERSION=	0.07
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Session Description Protocol (RFC 2327) packet parser/generator

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN1=		sdp2rat.1
MAN3=		Net::SDP.3 Net::SDP::Media.3 Net::SDP::Time.3

.include <bsd.port.mk>
