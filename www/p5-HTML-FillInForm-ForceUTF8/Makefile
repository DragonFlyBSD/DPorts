# Created by: Tomoyuki Sakurai <cherry@trombik.org>
# $FreeBSD: www/p5-HTML-FillInForm-ForceUTF8/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTML-FillInForm-ForceUTF8
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	FillInForm with UTF-8 encoding

RUN_DEPENDS=	p5-HTML-FillInForm>0:${PORTSDIR}/www/p5-HTML-FillInForm
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	HTML::FillInForm::ForceUTF8.3

NO_STAGE=	yes
.include <bsd.port.mk>
