# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: x11-toolkits/p5-Wx-Perl-ProcessStream/Makefile 322519 2013-07-08 17:13:12Z bapt $

PORTNAME=	Wx-Perl-ProcessStream
PORTVERSION=	0.32
CATEGORIES=	x11-toolkits perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module to access IO of external processes via events

BUILD_DEPENDS=	p5-Wx>=0.50:${PORTSDIR}/x11-toolkits/p5-Wx
RUN_DEPENDS=	p5-Wx>=0.50:${PORTSDIR}/x11-toolkits/p5-Wx

USE_WX=		2.6+
WX_COMPS=	wx contrib
WX_UNICODE=	yes
PERL_CONFIGURE=	yes

MAN3=		Wx::Perl::ProcessStream.3

.include <bsd.port.mk>
