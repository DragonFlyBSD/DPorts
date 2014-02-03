# Created by: Mike Bristow <mike@urgle.com>
# $FreeBSD: textproc/p5-XML-Descent/Makefile 341765 2014-01-29 17:46:33Z az $

PORTNAME=	XML-Descent
PORTVERSION=	1.04
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN/XML
PKGNAMEPREFIX=	p5-

MAINTAINER=	mike@urgle.com
COMMENT=	Recursive descent XML parsing

BUILD_DEPENDS=	p5-XML-TokeParser>=0:${PORTSDIR}/textproc/p5-XML-TokeParser \
		p5-Test-Differences>=0:${PORTSDIR}/devel/p5-Test-Differences
RUN_DEPENDS=	p5-XML-TokeParser>=0:${PORTSDIR}/textproc/p5-XML-TokeParser

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
