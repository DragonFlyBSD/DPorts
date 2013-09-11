# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: textproc/p5-XML-Parsepp/Makefile 326624 2013-09-07 10:53:30Z sunpoet $

PORTNAME=	XML-Parsepp
PORTVERSION=	0.06
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simplified pure Perl parser for XML

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USE_PERL5=	5.14+ configure
USES=		perl5

MAN3=		XML::Parsepp.3

post-patch:
	@${REINPLACE_CMD} -e 's|lib/Acme/XMLpp.pm|lib/XML/Parsepp.pm|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
