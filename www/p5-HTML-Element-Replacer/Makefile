# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: www/p5-HTML-Element-Replacer/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	HTML-Element-Replacer
PORTVERSION=	0.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl HTML::Element replacer

BUILD_DEPENDS=	p5-HTML-Element-Library>=4.2:${PORTSDIR}/www/p5-HTML-Element-Library \
		p5-HTML-Tree>=3.23:${PORTSDIR}/www/p5-HTML-Tree \
		p5-Moose>=0.72:${PORTSDIR}/devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
