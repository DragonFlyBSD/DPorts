# $FreeBSD: www/p5-CGI-Pager/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	CGI-Pager
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to generate HTML pagination linkage easily

BUILD_DEPENDS=	p5-URI>0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	CGI::Pager.3

NO_STAGE=	yes
.include <bsd.port.mk>
