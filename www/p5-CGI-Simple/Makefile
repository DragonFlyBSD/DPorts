# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: www/p5-CGI-Simple/Makefile 325904 2013-09-01 19:04:56Z az $

PORTNAME=	CGI-Simple
PORTVERSION=	1.113
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ANDYA
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A simple totally OO CGI interface that is CGI.pm compliant

TEST_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy

USES=		perl5
USE_PERL5=	configure

MAN3=		CGI::Simple.3 \
		CGI::Simple::Cookie.3 \
		CGI::Simple::Standard.3 \
		CGI::Simple::Util.3

.include <bsd.port.mk>
