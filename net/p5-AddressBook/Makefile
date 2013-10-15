# Created by: Brian Somers <brian@FreeBSD.org>
# $FreeBSD: net/p5-AddressBook/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	AddressBook
PORTVERSION=	0.16
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DLEIGH
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module providing an LDAP addressbook interface


BUILD_DEPENDS=	p5-Date-Manip>=0:${PORTSDIR}/devel/p5-Date-Manip \
		p5-XML-DOM>=0:${PORTSDIR}/textproc/p5-XML-DOM
RUN_DEPENDS=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	AddressBook.3 AddressBook::Config.3 AddressBook::DB::BBDB.3 \
	AddressBook::DB::DBI.3 AddressBook::DB::HTML.3 AddressBook::DB::LDAP.3 \
	AddressBook::DB::LDIF.3 AddressBook::DB::PDB.3 AddressBook::DB::Text.3 \
	AddressBook::Entry.3

NO_STAGE=	yes
.include <bsd.port.mk>
