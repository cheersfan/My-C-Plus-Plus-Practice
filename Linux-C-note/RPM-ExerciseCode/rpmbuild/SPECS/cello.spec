Name:           cello
Version:        1.0        
Release:        1%{?dist}
Summary:        This is a test for rpm by fxf

License:        GPLv3+        
URL:            https://www.example.com/%{name}
Source0:        https://www.example.com/%{name}/releases/%{name}-%{version}.tar.gz

BuildRequires:  gcc
BuildRequires:  make

%description
This is the first test about cello and RPM package making by fxf

%prep
%setup -q


%build
make %{?_smp_mflags}


%install
#rm -rf $RPM_BUILD_ROOT
%make_install


%files
%license LICENSE
%{_bindir}/%{name}
%attr(0755,root,root) %{_bindir}/%{name}


%changelog
* Wed Jan 16 2019 fxf <maxamillion@fedoraproject.org> - 1.0
- First cello package
