# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: ports/textproc/p5-XML-Liberal/Makefile,v 1.17 2013/01/26 16:48:35 svnexp Exp $

PORTNAME=	XML-Liberal
PORTVERSION=	0.30
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Super liberal XML parser that parses broken XML

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-HTML-Tagset>=0:${PORTSDIR}/www/p5-HTML-Tagset \
		p5-Module-Pluggable-Fast>=0.16:${PORTSDIR}/devel/p5-Module-Pluggable-Fast \
		p5-XML-LibXML>=1.58:${PORTSDIR}/textproc/p5-XML-LibXML
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		XML::Liberal.3 XML::Liberal::Error.3

.include <bsd.port.mk>
