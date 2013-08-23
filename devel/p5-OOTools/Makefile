# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: devel/p5-OOTools/Makefile 325064 2013-08-20 16:57:19Z mat $

PORTNAME=	OOTools
PORTVERSION=	2.30
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SKNPP
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:S/0$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module collection to easily create constructors methods

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::constr.3 \
		Class::groups.3 \
		Class::props.3	\
		Class::Util.3	\
		Class::Error.3	\
		Object::groups.3 \
		Object::props.3 \
		Package::groups.3 \
		Package::props.3

.include <bsd.port.mk>
