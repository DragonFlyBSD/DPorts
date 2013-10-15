# $FreeBSD: textproc/p5-HTML-SuperForm/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	HTML-SuperForm
PORTVERSION=	1.09
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JALLWINE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	HTML form generator

USES=		perl5
USE_PERL5=	configure

WRKSRC=	${WRKDIR}/${PORTNAME}

MAN3=	HTML::SuperForm.3 \
	HTML::SuperForm::Field.3\
	HTML::SuperForm::Field::Checkbox.3\
	HTML::SuperForm::Field::CheckboxGroup.3\
	HTML::SuperForm::Field::Hidden.3\
	HTML::SuperForm::Field::Password.3\
	HTML::SuperForm::Field::Radio.3\
	HTML::SuperForm::Field::RadioGroup.3\
	HTML::SuperForm::Field::Reset.3\
	HTML::SuperForm::Field::Select.3\
	HTML::SuperForm::Field::Submit.3\
	HTML::SuperForm::Field::Text.3\
	HTML::SuperForm::Field::Textarea.3

NO_STAGE=	yes
post-extract:
	@${RM} ${WRKSRC}/lib/HTML/SuperForm.pm.orig

.include <bsd.port.mk>
