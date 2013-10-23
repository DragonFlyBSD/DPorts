# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/p5-XML-TreePP/Makefile 331301 2013-10-22 16:57:44Z mat $

PORTNAME=	XML-TreePP
PORTVERSION=	0.41
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pure Perl implementation for parsing/writing xml files

USES=		perl5
USE_PERL5=	configure

MAN3=		XML::TreePP.3

NO_STAGE=	yes
post-install:
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/example/envxml.cgi ${EXAMPLESDIR}

.include <bsd.port.mk>
