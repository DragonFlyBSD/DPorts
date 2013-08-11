# Created by: patrick@mindstep.com
# $FreeBSD: security/p5-Crypt-Blowfish/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Crypt-Blowfish
PORTVERSION=	2.12
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to the Blowfish encryption alogorithm

BUILD_DEPENDS=	p5-Crypt-CBC>=0:${PORTSDIR}/security/p5-Crypt-CBC

WRKSRC=		${WRKDIR}/${DISTNAME:C/a$//}
USES=		perl5
USE_PERL5=	configure

MAN3=		Crypt::Blowfish.3

.include <bsd.port.mk>
