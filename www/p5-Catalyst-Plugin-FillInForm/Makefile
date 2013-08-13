# Created by: Travis Campbell <hcoyote@ghostar.org>
# $FreeBSD: www/p5-Catalyst-Plugin-FillInForm/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Catalyst-Plugin-FillInForm
PORTVERSION=	0.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Automatically fill in forms in Catalyst using HTML::FillInForms

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-HTML-FillInForm>=0:${PORTSDIR}/www/p5-HTML-FillInForm \
		p5-Catalyst-Action-RenderView>=0:${PORTSDIR}/www/p5-Catalyst-Action-RenderView
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-HTML-FillInForm>=0:${PORTSDIR}/www/p5-HTML-FillInForm

USES=		perl5
USE_PERL5=	configure

MAN3=		Catalyst::Plugin::FillInForm.3

.include <bsd.port.mk>
